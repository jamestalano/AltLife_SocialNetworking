//
//  ChatUIViewController.h
//  AltLifeProject
//
//  Created by James Talano on 11/7/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AMBubbleTableViewController.h>
@import Firebase;
@interface ChatUIViewController :AMBubbleTableViewController <AMBubbleTableDataSource, AMBubbleTableDelegate>
- (IBAction)onBack:(id)sender;
@property (strong, nonatomic) FIRDatabaseReference *ref;
@property (nonatomic) NSString *messageID;
@property (nonatomic) NSString *nameOfSender;
@property (nonatomic) UIImage *senderImage;


@end
