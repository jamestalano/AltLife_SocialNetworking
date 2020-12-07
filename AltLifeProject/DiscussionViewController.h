//
//  DiscussionViewController.h
//  AltLife
//
//  Created by James Talano on 10/5/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Firebase;

@interface DiscussionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)onAddDis:(id)sender;
@property (strong, nonatomic) FIRDatabaseReference *ref;

@end
