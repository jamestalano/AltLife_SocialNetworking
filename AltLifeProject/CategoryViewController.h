//
//  CategoryViewController.h
//  AltLife
//
//  Created by James Talano on 10/5/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Firebase;

@interface CategoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) FIRDatabaseReference *ref;

@end
