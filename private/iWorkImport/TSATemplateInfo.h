//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSSet, NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface TSATemplateInfo : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)prepareWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSSet *tags;
@property(readonly, nonatomic) _Bool isUserTemplate;
@property(readonly, nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) NSBundle *localizationBundle;
@property(readonly, nonatomic) NSURL *documentURL;
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSURL *previewImageURL;
- (id)makeIdentifier;
@property(readonly, nonatomic) NSString *identifier;
- (unsigned long long)hash;
- (_Bool)isEqualToTemplateInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1;

@end

