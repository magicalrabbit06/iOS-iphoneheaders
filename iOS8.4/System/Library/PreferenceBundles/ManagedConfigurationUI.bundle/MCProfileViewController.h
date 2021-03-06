/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <ManagedConfigurationUI/PSStateRestoration.h>

@protocol MCProfileViewControllerDelegate;
@class MCUIProfile, NSString;

@interface MCProfileViewController : UITableViewController <PSStateRestoration> {

	BOOL _profileOffersReenroll;
	BOOL _profileOffersRemoval;
	int _profileViewMode;
	id<MCProfileViewControllerDelegate> _profileViewControllerDelegate;
	MCUIProfile* _UIProfile;

}

@property (assign,nonatomic,__weak) id<MCProfileViewControllerDelegate> profileViewControllerDelegate;              //@synthesize profileViewControllerDelegate=_profileViewControllerDelegate - In the implementation block
@property (assign,nonatomic) int profileViewMode;                                                                   //@synthesize profileViewMode=_profileViewMode - In the implementation block
@property (nonatomic,retain) MCUIProfile * UIProfile;                                                               //@synthesize UIProfile=_UIProfile - In the implementation block
@property (assign,nonatomic) BOOL profileOffersReenroll;                                                            //@synthesize profileOffersReenroll=_profileOffersReenroll - In the implementation block
@property (assign,nonatomic) BOOL profileOffersRemoval;                                                             //@synthesize profileOffersRemoval=_profileOffersRemoval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)setProfileOffersReenroll:(BOOL)arg1 ;
-(void)setProfileOffersRemoval:(BOOL)arg1 ;
-(BOOL)profileOffersReenroll;
-(int)profileViewMode;
-(BOOL)profileOffersRemoval;
-(id<MCProfileViewControllerDelegate>)profileViewControllerDelegate;
-(MCUIProfile *)UIProfile;
-(BOOL)_shouldShowUpdateButton;
-(BOOL)_shouldShowRemoveButton;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_updateProfile;
-(void)_removeProfile;
-(id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(int)arg3 ;
-(void)setProfileViewMode:(int)arg1 ;
-(void)setProfileViewControllerDelegate:(id<MCProfileViewControllerDelegate>)arg1 ;
-(void)_setup;
-(BOOL)canBeShownFromSuspendedState;
-(void)setProfile:(id)arg1 ;
@end

