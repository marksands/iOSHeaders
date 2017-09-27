//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement
{
}

@property(readonly, copy) NSString *hashName;
@property(readonly, copy) NSString *search;
@property(readonly, copy) NSString *pathname;
@property(readonly, copy) NSString *port;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *host;
@property(readonly, copy) NSString *protocol;
- (id)origin;
@property(copy) NSString *href;
- (id)relList;
@property(readonly, copy) NSURL *absoluteLinkURL;
@property(readonly, copy) NSString *text;
@property(copy) NSString *accessKey;
@property(copy) NSString *type;
@property(copy) NSString *target;
@property(copy) NSString *shape;
@property(copy) NSString *rev;
@property(copy) NSString *rel;
- (void)setPing:(id)arg1;
- (id)ping;
@property(copy) NSString *name;
@property(copy) NSString *hreflang;
@property(copy) NSString *coords;
@property(copy) NSString *charset;

@end

