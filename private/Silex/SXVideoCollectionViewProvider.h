//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoCollectionViewProviding.h"

@class NSString, UICollectionView;

@interface SXVideoCollectionViewProvider : NSObject <SXVideoCollectionViewProviding>
{
    UICollectionView *_collectionView;
    id <SXVideoCollectionViewLayoutFactory> _collectionViewLayoutFactory;
}

@property(readonly, nonatomic) id <SXVideoCollectionViewLayoutFactory> collectionViewLayoutFactory; // @synthesize collectionViewLayoutFactory=_collectionViewLayoutFactory;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayoutFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

