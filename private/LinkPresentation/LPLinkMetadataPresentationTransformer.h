//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPLinkMetadata, NSURL;

@interface LPLinkMetadataPresentationTransformer : NSObject
{
    _Bool _complete;
    _Bool _allowsTapToLoad;
    _Bool _forceMiniStyle;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
}

@property(nonatomic) _Bool forceMiniStyle; // @synthesize forceMiniStyle=_forceMiniStyle;
@property(nonatomic) _Bool allowsTapToLoad; // @synthesize allowsTapToLoad=_allowsTapToLoad;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)presentationProperties;
- (id)backgroundColorForStyle:(long long)arg1;
- (id)videoForStyle:(long long)arg1;
- (id)imageForStyle:(long long)arg1 icon:(id *)arg2;
- (id)quotedTextForStyle:(long long)arg1;
- (id)bottomCaptionForStyle:(long long)arg1;
- (id)topCaptionForStyle:(long long)arg1;
- (id)mainCaptionBarForStyle:(long long)arg1;
- (long long)rendererStyle;
@property(readonly, copy, nonatomic) NSURL *canonicalURL;
@property(readonly, copy, nonatomic) NSURL *originalURL;

@end

