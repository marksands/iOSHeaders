//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

@class UIImage;

@interface WBSFaviconResponse : WBSSiteMetadataResponse
{
    _Bool _defaultIcon;
    UIImage *_favicon;
}

+ (id)responseWithURL:(id)arg1 favicon:(id)arg2 isDefaultIcon:(_Bool)arg3;
@property(readonly, nonatomic, getter=isDefaultIcon) _Bool defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(readonly, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 isDefaultIcon:(_Bool)arg3;
- (id)initWithURL:(id)arg1;

@end

