//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CoreDAVItemParserMapping : NSObject
{
    NSString *_nameSpace;
    NSString *_name;
    Class _parseClass;
}

@property(nonatomic) Class parseClass; // @synthesize parseClass=_parseClass;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;

@end

