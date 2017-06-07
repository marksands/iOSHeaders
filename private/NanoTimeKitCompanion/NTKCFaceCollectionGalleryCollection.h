//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>

@class NSString, NTKFaceCollection;

@interface NTKCFaceCollectionGalleryCollection : NTKCGalleryCollection <NTKFaceCollectionObserver>
{
    NTKFaceCollection *_faceCollection;
}

- (void).cxx_destruct;
- (void)faceCollectionDidReorderFaces:(id)arg1;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFaces;
- (id)initWithTitle:(id)arg1 faceCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

