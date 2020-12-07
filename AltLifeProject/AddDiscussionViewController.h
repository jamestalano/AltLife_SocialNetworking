//
//  AddDiscussionViewController.h
//  AltLifeProject
//
//  Created by James Talano on 11/2/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Firebase;

@interface AddDiscussionViewController : UIViewController
- (IBAction)onBack:(id)sender;
@property (strong, nonatomic) FIRDatabaseReference *ref;

@property (weak, nonatomic) IBOutlet UITextField *titleText;
@property (weak, nonatomic) IBOutlet UITextView *contentsText;
- (IBAction)onSubmit:(id)sender;
@end
