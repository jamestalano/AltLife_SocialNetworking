//
//  SomeoneFollower.h
//  AltLife
//
//  Created by James Talano on 10/15/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Firebase;

@interface SomeoneFollower : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (weak, nonatomic) NSString *followID;
@property (nonatomic) int isFollower;
@property (nonatomic) int isMe;
@property (strong, nonatomic) FIRDatabaseReference *ref;

- (IBAction)onBack:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *titleText;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@end
