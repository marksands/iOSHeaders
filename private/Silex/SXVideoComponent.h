//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXComponent.h>

#import "SXComponentAdvertisingMetadataProviding.h"

@class NSString, SXJSONDictionary;

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>
{
}

+ (id)typeString;
- (unsigned long long)traits;
- (_Bool)enablePrerollWithValue:(id)arg1 withType:(int)arg2;
- (double)aspectRatioWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessibilityCaption; // @dynamic accessibilityCaption;
@property(readonly, nonatomic) SXJSONDictionary *advertising; // @dynamic advertising;
@property(readonly, nonatomic) double aspectRatio; // @dynamic aspectRatio;
@property(readonly, nonatomic) NSString *caption; // @dynamic caption;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool enablePreroll; // @dynamic enablePreroll;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *resourceIdentifier; // @dynamic resourceIdentifier;
@property(readonly, nonatomic) NSString *stillImageIdentifier; // @dynamic stillImageIdentifier;
@property(readonly) Class superclass;

@end

