@import UIKit;

#import "FORMFieldValuesTableViewHeader.h"

@class FORMFieldValue;
@class FORMField;

@protocol FORMFieldValuesTableViewControllerDelegate;

@interface FORMFieldValuesTableViewController : UITableViewController

@property (nonatomic, weak) FORMField *field;
@property (nonatomic, strong) FORMFieldValuesTableViewHeader *headerView;
@property (nonatomic) CGFloat customHeight;

@property (nonatomic, weak) id <FORMFieldValuesTableViewControllerDelegate> delegate;

@end


@protocol FORMFieldValuesTableViewControllerDelegate <NSObject>

- (void)fieldValuesTableViewController:(FORMFieldValuesTableViewController *)fieldValuesTableViewController
                      didSelectedValue:(FORMFieldValue *)selectedValue;

@end
