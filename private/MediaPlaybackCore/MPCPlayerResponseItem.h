//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MPModelGenericObject, NSIndexPath, NSString;

@interface MPCPlayerResponseItem : NSObject
{
    NSString *_contentItemIdentifier;
    long long _revision;
    MPCPlayerResponse *_response;
    NSIndexPath *_indexPath;
    MPModelGenericObject *_metadataObject;
    CDStruct_98c298d5 _duration;
}

@property(readonly, nonatomic) MPModelGenericObject *metadataObject; // @synthesize metadataObject=_metadataObject;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) CDStruct_98c298d5 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSString *contentItemIdentifier; // @synthesize contentItemIdentifier=_contentItemIdentifier;
- (void).cxx_destruct;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)arg1;
- (id)startPictureInPicture;
- (id)remove;
- (id)rateCommand;
- (id)wishlistCommand;
- (id)dislikeCommand;
- (id)likeCommand;
- (id)playbackRateCommand;
- (id)seekCommand;
- (id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3;

@end

