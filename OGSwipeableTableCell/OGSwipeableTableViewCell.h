//
//  OGSwipeableTableViewCell.h
//  OGSwipeableTableCell
//
//  Created by Odie Edo-Osagie on 08/06/2014.
//  Copyright (c) 2014 Odie Edo-Osagie. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol OGSwipeableTableViewCellDelegate <NSObject>
- (void)buttonOneActionForItemText:(NSString *)itemText;
- (void)buttonTwoActionForItemText:(NSString *)itemText;
@end

@interface OGSwipeableTableViewCell : UITableViewCell <UIGestureRecognizerDelegate>

@property (nonatomic, weak) id <OGSwipeableTableViewCellDelegate> delegate;

@property (nonatomic, weak) IBOutlet UIButton *button1;
@property (nonatomic, weak) IBOutlet UIButton *button2;
@property (nonatomic, weak) IBOutlet UIButton *leftmostButton;
@property (nonatomic, weak) IBOutlet UIView *customContentView;
@property (nonatomic, weak) IBOutlet UILabel *customTextLabel;

@property (nonatomic, strong) NSString *itemText;

@property (nonatomic, strong) UIPanGestureRecognizer *panRecognizer;
@property (nonatomic, assign) CGPoint panStartPoint;
@property (nonatomic, assign) CGFloat startingRightLayoutConstraintConstant;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *contentViewRightConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *contentViewLeftConstraint;

- (IBAction)buttonClicked:(id)sender;

@end
