//
//  MessageTableCell.h
//  AltLifeProject
//
//  Created by James Talano on 11/8/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MessageTableCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameText;
@property (weak, nonatomic) IBOutlet UIImageView *profileImage;
@property (weak, nonatomic) IBOutlet UILabel *chatText;
@property (weak, nonatomic) IBOutlet UILabel *agoText;

@end
