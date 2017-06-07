//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVPrincipalItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_all;
    CoreDAVItemWithNoChildren *_authenticated;
    CoreDAVItemWithNoChildren *_unauthenticated;
    CoreDAVItem *_property;
    CoreDAVItemWithNoChildren *_selfItem;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *selfItem; // @synthesize selfItem=_selfItem;
@property(retain, nonatomic) CoreDAVItem *property; // @synthesize property=_property;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *all; // @synthesize all=_all;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (id)hashString;
- (void)write:(id)arg1;
- (id)description;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsAll;
- (id)init;

@end

