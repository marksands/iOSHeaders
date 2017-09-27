//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OAXClient.h>

@class PXPresentationState;

__attribute__((visibility("hidden")))
@interface PXOfficeArtClient : OAXClient
{
    PXPresentationState *mPresentationState;
}

+ (int)readPlaceholderBoundsTrackFromNode:(struct _xmlNode *)arg1;
+ (int)readPlaceholderTypeFromNode:(struct _xmlNode *)arg1;
- (_Bool)chartAutoStrokeIsHollow;
- (_Bool)chartAutoFillIsHollow;
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
- (id)readClientTextField:(struct _xmlNode *)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;
- (id)presentationState;
- (id)initWithState:(id)arg1;

@end

