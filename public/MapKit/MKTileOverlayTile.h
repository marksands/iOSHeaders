//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface MKTileOverlayTile : NSObject
{
    CDStruct_cbb88d5e _path;
    CDStruct_02837cd9 _frame;
    double _scale;
    NSData *_image;
}

@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CDStruct_02837cd9 frame; // @synthesize frame=_frame;
@property(nonatomic) CDStruct_cbb88d5e path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;

@end

