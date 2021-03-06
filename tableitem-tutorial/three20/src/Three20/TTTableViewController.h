#import "Three20/TTViewController.h"
#import "Three20/TTTableViewDataSource.h"

@class TTActivityLabel;

@interface TTTableViewController : TTViewController <TTTableViewDataSourceDelegate> {
  UITableView* _tableView;
  TTActivityLabel* _refreshingView;
  id<TTTableViewDataSource> _dataSource;
  id<TTTableViewDataSource> _statusDataSource;
  id<UITableViewDelegate> _tableDelegate;
  BOOL _variableHeightRows;
  UITableViewStyle _tableViewStyle;
}

@property(nonatomic,retain) UITableView* tableView;
@property(nonatomic) UITableViewStyle tableViewStyle;
@property(nonatomic,retain) id<TTTableViewDataSource> dataSource;
@property(nonatomic) BOOL variableHeightRows;

- (id)initWithStyle:(UITableViewStyle)style;

- (id<TTTableViewDataSource>)createDataSource;
- (id<UITableViewDelegate>)createDelegate;

- (void)didSelectObject:(id)object atIndexPath:(NSIndexPath*)indexPath;
- (BOOL)shouldNavigateToURL:(NSString*)URL;

- (void)didBeginDragging;
- (void)didEndDragging;

- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event;
- (void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)event;

@end
