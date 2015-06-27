/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>
#import <PhotoLibraryServices/PLCloudSharedAlbumProtocol.h>

@class NSOrderedSet, NSNumber, NSString, PLManagedAsset, NSArray, NSDate, NSMutableOrderedSet, UIImage, NSDictionary, NSURL;

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol> {

	char _deleteFromDBOnly;

}

@property (nonatomic,retain) NSOrderedSet * assets; 
@property (assign,nonatomic) short cloudAlbumSubtype; 
@property (nonatomic,retain) NSNumber * cloudRelationshipState; 
@property (nonatomic,retain) NSNumber * cloudRelationshipStateLocal; 
@property (nonatomic,retain) NSNumber * isOwned; 
@property (nonatomic,retain) NSNumber * hasUnseenContent; 
@property (nonatomic,retain) NSNumber * cloudOwnerEmailKey; 
@property (assign,nonatomic) char cloudNotificationsEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) char canShowComments; 
@property (nonatomic,readonly) char canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) char hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) char isLibrary; 
@property (nonatomic,readonly) char isCameraAlbum; 
@property (nonatomic,readonly) char isPanoramasAlbum; 
@property (nonatomic,readonly) char isWallpaperAlbum; 
@property (nonatomic,readonly) char isPhotoStreamAlbum; 
@property (nonatomic,readonly) char isCloudSharedAlbum; 
@property (nonatomic,readonly) char isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) char isStandInAlbum; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) char isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) char isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) char isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) char isRecentlyAddedAlbum; 
@property (nonatomic,readonly) char isUserLibraryAlbum; 
@property (nonatomic,readonly) char canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) char shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned batchSize; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allCloudSharedAlbumsInLibrary:(id)arg1 ;
+(id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)localizedSharedByLabelWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 isOwned:(char)arg5 allowsEmail:(char)arg6 ;
+(id)cloudOwnerDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 includingEmail:(char)arg5 allowsEmail:(char)arg6 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)localizedSharedByLabelAllowsEmail:(char)arg1 ;
-(id)cloudOwnerDisplayNameIncludingEmail:(char)arg1 allowsEmail:(char)arg2 ;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1 ;
-(void)updateCloudLastContributionDateWithDate:(id)arg1 ;
-(void)getUnseenStartMarkerIndex:(unsigned*)arg1 count:(unsigned*)arg2 showsProgress:(char*)arg3 ;
-(void)userDeleteSubscriberRecord:(id)arg1 ;
-(NSString *)cloudOwnerEmail;
-(void)setCloudOwnerEmail:(NSString *)arg1 ;
-(unsigned)unseenAssetsCountIntegerValue;
-(void)setUnseenAssetsCountIntegerValue:(unsigned)arg1 ;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(NSString *)localizedSharedWithLabel;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(NSDate *)cloudFirstRecentBatchDate;
-(char)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(char)arg1 ;
-(char)isOwnedCloudSharedAlbum;
-(char)isFamilyCloudSharedAlbum;
-(char)isMultipleContributorCloudSharedAlbum;
-(char)canContributeToCloudSharedAlbum;
-(id)sortingComparator;
-(void)delete;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(void)publishBatchOfOriginalAssets:(id)arg1 withBatchCommentText:(id)arg2 andTrimmedVideoPathInfo:(id)arg3 isNewAlbum:(char)arg4 ;
-(id)_expectedKeyAssets:(id)arg1 ;
-(void)deleteFromDatabaseOnly;
-(id)albumDirectoryPath;
-(void)persistRecoveryMetadata;
@end
