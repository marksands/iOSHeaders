//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXProtoFeatureView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXPhotoAnalysisStatusController;

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver>
{
    PXPhotoAnalysisStatusController *_statusController;
    NSString *_statusDescription;
    double _preferredStatusWidth;
}

@property(readonly, nonatomic) double preferredStatusWidth; // @synthesize preferredStatusWidth=_preferredStatusWidth;
@property(readonly, copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setStatusDescription:(id)arg1;
- (void)_updateStatusDescription;
- (void)statusDescriptionDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

