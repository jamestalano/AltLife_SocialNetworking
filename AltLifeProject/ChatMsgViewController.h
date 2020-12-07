//
//  ChatMsgViewController.h
//  AltLifeProject
//
//  Created by James Talano on 11/1/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Firebase;

@interface ChatMsgViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) FIRDatabaseReference *ref;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
