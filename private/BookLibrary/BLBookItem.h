//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface BLBookItem : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    _Bool _sample;
    _Bool _iTunesU;
    NSString *_temporaryIdentifier;
    NSString *_legacyUniqueIdentifier;
    NSString *_storeIdentifier;
    NSString *_persistentIdentifier;
    NSString *_publisherIdentifier;
    NSString *_title;
    NSString *_author;
    NSString *_feedURL;
    NSURL *_fileURL;
    NSURL *_permlink;
    long long _type;
    NSString *_publicationVersion;
    NSString *_album;
    NSString *_folderName;
    NSDictionary *_entry;
    NSString *_identifier;
    long long _purgePriority;
    NSDate *_lastUserAccessDate;
    NSString *_itunesuAssetID;
    NSString *_coverImagePath;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *coverImagePath; // @synthesize coverImagePath=_coverImagePath;
@property(copy, nonatomic) NSString *itunesuAssetID; // @synthesize itunesuAssetID=_itunesuAssetID;
@property(retain, nonatomic) NSDate *lastUserAccessDate; // @synthesize lastUserAccessDate=_lastUserAccessDate;
@property(nonatomic) long long purgePriority; // @synthesize purgePriority=_purgePriority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDictionary *entry; // @synthesize entry=_entry;
@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *publicationVersion; // @synthesize publicationVersion=_publicationVersion;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool iTunesU; // @synthesize iTunesU=_iTunesU;
@property(nonatomic, getter=isSample) _Bool sample; // @synthesize sample=_sample;
@property(retain, nonatomic) NSURL *permlink; // @synthesize permlink=_permlink;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *legacyUniqueIdentifier; // @synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier;
@property(copy, nonatomic) NSString *temporaryIdentifier; // @synthesize temporaryIdentifier=_temporaryIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)_cloudDictionaryRepresentation;
- (void)_setCloudCoverImageData:(id)arg1;
- (id)_cloudCoverImageData;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, nonatomic) NSString *path;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEduCloudData:(id)arg1 path:(id)arg2;
- (id)initWithStoreDownload:(id)arg1 permlink:(id)arg2 title:(id)arg3;
- (id)initWithEntry:(id)arg1 basePath:(id)arg2;

@end

