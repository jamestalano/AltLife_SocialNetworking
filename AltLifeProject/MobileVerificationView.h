//
//  MobileVerificationView.h
//  
//
//  Created by James Talano on 10/17/17.
//
//

#import <UIKit/UIKit.h>

@interface MobileVerificationView : UIViewController
- (IBAction)onSubmit:(id)sender;
- (IBAction)onBack:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *phonenumber;

@end
