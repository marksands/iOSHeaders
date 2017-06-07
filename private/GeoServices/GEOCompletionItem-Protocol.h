//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, GEOSearchCategory, NSArray, NSData, NSString;
@protocol GEOMapItem;

@protocol GEOCompletionItem <NSObject>
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
@property(readonly, nonatomic) NSArray *displayLines;
- (void)sendFeedback;
- (_Bool)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (NSString *)calloutTitle;
- (NSString *)queryLine;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
@end

