/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSManagedObjectID;

@interface PHChangeRequestHelper : NSObject {

	char _isMutated;
	char _isNew;
	char _didRequestUUID;
	NSMutableDictionary* _mutations;
	id _changeRequest;
	NSString* _uuid;
	NSString* _uuidSaveToken;
	NSManagedObjectID* _objectID;

}

@property (assign,nonatomic,__weak) id changeRequest;                        //@synthesize changeRequest=_changeRequest - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * uuidSaveToken;                     //@synthesize uuidSaveToken=_uuidSaveToken - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutations;              //@synthesize mutations=_mutations - In the implementation block
@property (assign,getter=isNew,nonatomic) char new; 
@property (assign,getter=isMutated,nonatomic) char mutated; 
+(id)changeRequestForObject:(id)arg1 ;
+(id)changeRequestWithXPCDict:(id)arg1 entitled:(char)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(char)isNew;
-(char)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3 ;
-(id)changeRequest;
-(char)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)uuidSaveToken;
-(NSMutableDictionary *)mutations;
-(id)initForNewObjectWithChangeRequest:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 ;
-(void)generateUUIDIfNecessary;
-(void)didMutate;
-(char)isMutated;
-(void)setMutated:(char)arg1 ;
-(void)setNew:(char)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(char)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)setChangeRequest:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)uuid;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
@end

