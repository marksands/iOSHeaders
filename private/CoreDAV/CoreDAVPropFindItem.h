//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_propName;
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) CoreDAVItem *include; // @synthesize include=_include;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *allProp; // @synthesize allProp=_allProp;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *propName; // @synthesize propName=_propName;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

