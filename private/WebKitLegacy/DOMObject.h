//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WebScriptObject.h>

#import <WebKitLegacy/NSCopying-Protocol.h>

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying>
{
    struct DOMObjectInternal *_internal;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
@property(readonly) DOMStyleSheet *sheet;

@end

