//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<PLAlbumProtocol>;

@interface PLFileSystemImportAsset : NSObject
{
    int assetKind;
    NSMutableSet *_urls;
    struct NSObject *_destinationAlbum;
}

@property(nonatomic) int assetKind; // @synthesize assetKind;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
@property(retain, nonatomic) NSMutableSet *urls; // @synthesize urls=_urls;
- (id)description;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (_Bool)isCameraKit;
- (id)initWithURLs:(id)arg1 destinationAlbum:(struct NSObject *)arg2 assetKind:(int)arg3;

@end

