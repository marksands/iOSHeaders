//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUIMediaItem.h>

#import "VUIMPMediaEntityImageLoadParamsCreating.h"

@class MPMediaItem, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating>
{
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
    MPMediaItem *_mediaItem;
}

@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)mediaPlayerMediaItem;
- (id)rentalExpirationDate;
- (id)credits;
- (id)studio;
- (id)seasonIdentifier;
- (id)extrasURL;
- (id)previewFrameImageIdentifier;
- (id)isPlayable;
- (id)assetType;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)assetController;
- (id)showIdentifier;
- (id)playedState;
- (id)coverArtImageIdentifier;
- (id)contentRating;
- (id)HLSAudioCapability;
- (id)HLSColorCapability;
- (id)HLSResolution;
- (id)audioCapability;
- (id)colorCapability;
- (id)resolution;
- (id)isLocal;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3;

@end

