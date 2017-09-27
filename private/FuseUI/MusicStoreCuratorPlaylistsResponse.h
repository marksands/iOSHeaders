//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPModelResponse.h"

@class MPChangeDetails, NSArray;

@interface MusicStoreCuratorPlaylistsResponse : MPModelResponse
{
    MPChangeDetails *_changeDetails;
    NSArray *_additionalPlaylistIdentifiers;
}

@property(copy, nonatomic) NSArray *additionalPlaylistIdentifiers; // @synthesize additionalPlaylistIdentifiers=_additionalPlaylistIdentifiers;
@property(retain, nonatomic) MPChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAdditionalPlaylists;

@end

