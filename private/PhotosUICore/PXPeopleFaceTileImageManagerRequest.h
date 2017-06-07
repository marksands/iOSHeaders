//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset, PHFace, PHPerson;

@interface PXPeopleFaceTileImageManagerRequest : NSObject
{
    _Bool _isPeopleHomeRequest;
    PHPerson *_person;
    PHFace *_face;
    PHAsset *_asset;
}

@property(nonatomic) _Bool isPeopleHomeRequest; // @synthesize isPeopleHomeRequest=_isPeopleHomeRequest;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) PHFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3;
- (id)initWithPerson:(id)arg1;

@end

