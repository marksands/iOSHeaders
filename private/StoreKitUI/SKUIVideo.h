//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SKUIVideo : NSObject
{
    id <SKUIArtworkProviding> _artworks;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) id <SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
- (void).cxx_destruct;
- (id)initWithVideoDictionary:(id)arg1;

@end

