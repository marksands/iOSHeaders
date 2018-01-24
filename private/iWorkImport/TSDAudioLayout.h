//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDMediaLayout.h>

__attribute__((visibility("hidden")))
@interface TSDAudioLayout : TSDMediaLayout
{
}

- (id)movieInfo;
- (struct CGRect)frameForCulling;
- (int)wrapType;
- (_Bool)canFlip;
- (_Bool)allowsConnections;
- (struct CGRect)alignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (_Bool)shouldDisplayGuides;
- (id)layoutGeometryFromInfo;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)supportsRotation;
- (id)initWithInfo:(id)arg1;

@end

