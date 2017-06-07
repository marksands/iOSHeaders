//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString, NSURL;
@protocol GSAdditionStoring, GSAdditionStoring><GSAdditionStoringPrivate, NSCopying><NSSecureCoding;

@interface GSAddition : NSObject
{
    NSObject<GSAdditionStoring><GSAdditionStoringPrivate> *_storage;
    unsigned long long _options;
    NSNumber *_size;
    NSString *_namespace;
    NSURL *_url;
    NSString *_originalName;
    NSString *_displayName;
    NSDictionary *_userInfo;
}

+ (id)makeNameForUser:(unsigned int)arg1 name:(id)arg2;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_namespace;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)replaceItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)copyAdditionContentToURL:(id)arg1 error:(id *)arg2;
- (_Bool)internalStat:(struct stat *)arg1;
- (_Bool)mergeUserInfo:(id)arg1 error:(id *)arg2;
- (_Bool)setNameSpace:(id)arg1 error:(id *)arg2;
- (_Bool)setDisplayName:(id)arg1 error:(id *)arg2;
- (_Bool)setOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)_initWithStorage:(id)arg1 andDictionary:(id)arg2;
- (void)_refreshWithDictionary:(id)arg1;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)refreshWithError:(id *)arg1;
@property(readonly, nonatomic) NSDictionary *userInfo;
- (id)userInfoWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *originalPOSIXName;
- (id)originalPOSIXNameWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *displayName;
- (id)displayNameWithError:(id *)arg1;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSNumber *size;
@property(readonly, nonatomic) _Bool isSavedConflict;
@property(readonly, nonatomic) NSData *sandboxExtension;

@end

