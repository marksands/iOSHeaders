//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject
{
    NSDictionary *_responseDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long size;
@property(readonly, copy, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) double previewDuration;
@property(readonly, nonatomic) double duration;
- (id)initWithResponseDictionary:(id)arg1;

@end

