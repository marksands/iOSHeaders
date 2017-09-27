//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCKeyValueStoreCoding.h"
#import "NSCopying.h"

@class NSData, NSDate, NSNumber, NSString, NSURL;

@interface FCAppConfigurationResource : NSObject <NSCopying, FCKeyValueStoreCoding>
{
    NSURL *_sourceURL;
    NSString *_etag;
    NSDate *_lastFetchedDate;
    NSDate *_lastModifiedDate;
    NSString *_resourceID;
    NSData *_gzippedConfigurationData;
    NSString *_lastModifiedString;
    NSNumber *_maxAge;
}

+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
@property(retain, nonatomic) NSNumber *maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property(retain, nonatomic) NSData *gzippedConfigurationData; // @synthesize gzippedConfigurationData=_gzippedConfigurationData;
@property(retain, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (void)writeToKeyValuePair:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *configurationData;
- (_Bool)isExpiredWithFallbackMaxAge:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

