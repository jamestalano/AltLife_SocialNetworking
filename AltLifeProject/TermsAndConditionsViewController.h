//
//  TermsAndConditionsViewController.h
//  AltLife
//
//  Created by James Talano on 10/3/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TermsAndConditionsViewController : UIViewController
- (IBAction)onDisagree:(id)sender;
- (IBAction)onAgree:(id)sender;
@property (weak, nonatomic) IBOutlet UITextView *labelText;


@end
