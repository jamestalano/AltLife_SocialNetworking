//
//  SignUpClassViewController.h
//  AltLife
//
//  Created by James Talano on 10/3/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
@import FirebaseDatabase;

@interface SignUpClassViewController : UIViewController <UITextFieldDelegate, UIImagePickerControllerDelegate>
- (IBAction)onLogin:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *emailText;
@property (weak, nonatomic) IBOutlet UITextField *pwdText;
@property (weak, nonatomic) IBOutlet UITextField *nameText;
@property (weak, nonatomic) IBOutlet UITextField *pwdConfirmText;
- (IBAction)onSignUp:(id)sender;

@property (strong, nonatomic) FIRDatabaseReference *ref;
- (IBAction)onTakePhoto:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *profileImage;
@property (weak, nonatomic) IBOutlet UIButton *cameraButton;

@end
