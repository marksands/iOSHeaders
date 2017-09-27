//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, PLCloudFeedCommentsEntry, PLManagedAsset;

@interface PLCloudSharedComment : PLManagedObject
{
}

+ (id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(_Bool)arg4 isMyComment:(_Bool)arg5 inLibrary:(id)arg6;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) NSString *commenterFullName;
@property(readonly, nonatomic) NSString *commenterLastName;
@property(readonly, nonatomic) NSString *commenterFirstName;
@property(readonly, nonatomic) NSString *commenterEmail;
- (_Bool)canBeDeletedByUser;
- (id)commenterDisplayName;
- (_Bool)isInterestingForAlbumsSorting;
- (_Bool)shouldNotifyAsBulletinWithMediaStreamInfo:(id)arg1 asCaptionOnly:(_Bool *)arg2;
- (_Bool)_isInterestingToUser;
@property(readonly, nonatomic) _Bool isLikeBoolValue;
@property(readonly, nonatomic) PLCloudFeedCommentsEntry *cloudFeedEntry;
- (id)asset;
- (void)dealloc;
- (void)prepareForDeletion;
- (void)willSave;
- (void)awakeFromInsert;
- (id)init;

// Remaining properties
@property(retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry; // @dynamic cloudFeedCommentEntry;
@property(retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry; // @dynamic cloudFeedLikeCommentEntry;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(retain, nonatomic) NSDate *commentClientDate; // @dynamic commentClientDate;
@property(retain, nonatomic) NSDate *commentDate; // @dynamic commentDate;
@property(retain, nonatomic) NSString *commentText; // @dynamic commentText;
@property(retain, nonatomic) NSString *commentType; // @dynamic commentType;
@property(retain, nonatomic) PLManagedAsset *commentedAsset; // @dynamic commentedAsset;
@property(retain, nonatomic) NSString *commenterHashedPersonID; // @dynamic commenterHashedPersonID;
@property(retain, nonatomic) NSNumber *isBatchComment; // @dynamic isBatchComment;
@property(retain, nonatomic) NSNumber *isCaption; // @dynamic isCaption;
@property(retain, nonatomic) NSNumber *isDeletable; // @dynamic isDeletable;
@property(retain, nonatomic) NSNumber *isLike; // @dynamic isLike;
@property(retain, nonatomic) NSNumber *isMyComment; // @dynamic isMyComment;
@property(retain, nonatomic) PLManagedAsset *likedAsset; // @dynamic likedAsset;

@end

