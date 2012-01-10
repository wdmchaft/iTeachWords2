//
//  MenuViewController.h
//  iTeachWords
//
//  Created by Edwin Zuydendorp on 12/27/11.
//  Copyright 2011 OSDN. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MenuViewController : UIViewController {
@private
    IBOutlet UILabel *titleLbl1;
    IBOutlet UILabel *titleLbl2;
    
    IBOutlet UILabel *titleLbl4;
    IBOutlet UILabel *titleLbl5;
    IBOutlet UILabel *titleLbl6;
    
    IBOutlet UILabel *titleLbl7;
    IBOutlet UILabel *titleLbl8;
    IBOutlet UILabel *titleLbl9;
    
    IBOutlet UIButton *menuBtn1;
}

- (void)setTitles;
- (void)showLastItem;
- (IBAction)showOptionView:(id)sender;
- (void)addInfoButton;

- (void)showInfoView;
- (void)showTeachView;
- (void)showAddingWordView;
- (void)showTextParserView;
- (void)showDictionaryView;
- (void)showSettingsView;
- (void)showLastItem;
- (void)showInfoView;
- (void)showWebView;
- (void)showVocalizerView;
- (void)showRecognizerView;

- (void)checkDelayedThemes;
- (void)addCustomBadgeWithCount:(int)badgeCount toObjectWithFrame:(CGRect)objectFrame;

@end
