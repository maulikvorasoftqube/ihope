//
//  HomeVC.h
//  iHope
//
//  Created by harikrishna patel on 29/11/17.
//  Copyright © 2017 Softqube. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeVC : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *btnMenu;
- (IBAction)btnMenu:(id)sender;

@property (strong, nonatomic) IBOutlet UICollectionView *collectionCategory;

@end
