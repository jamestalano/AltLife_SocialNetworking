//
//  AddCommentTableViewCell.h
//  AltLifeProject
//
//  Created by James Talano on 11/7/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddCommentTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *profileName;

@property (weak, nonatomic) IBOutlet UILabel *contentsText;
@property (weak, nonatomic) IBOutlet UIImageView *profileImage;
@end
