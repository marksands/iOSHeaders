//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HMDAirPlayEndpoint : NSObject
{
    void *_endpoint;
    NSString *_uniqueIdentifier;
    NSString *_sessionIdentifier;
    NSString *_localizedName;
    NSArray *_advertisements;
}

@property(readonly, nonatomic) NSArray *advertisements; // @synthesize advertisements=_advertisements;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) void *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)_getAdvertisements;
- (id)initWithEndpoint:(void *)arg1;

@end

