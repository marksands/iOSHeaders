//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, TSCEAbortObject;

__attribute__((visibility("hidden")))
@interface TSCEReferenceParsingContext : NSObject <NSCopying>
{
    _Bool _filterColons;
    _Bool _referenceIsComplete;
    _Bool _namesUsed;
    unsigned char _stickyBits;
    id <TSCEReferenceResolving> _contextResolver;
    NSString *_contextSheetName;
    TSCEAbortObject *_abortObject;
    NSString *_sheetName;
    NSString *_tableName;
    NSString *_rest;
    NSString *_sheetNameUnquoted;
    NSString *_tableNameUnquoted;
    NSMutableArray *_referencesMatchingInputAsPrefix;
}

@property(retain, nonatomic) NSMutableArray *referencesMatchingInputAsPrefix; // @synthesize referencesMatchingInputAsPrefix=_referencesMatchingInputAsPrefix;
@property(retain, nonatomic) NSString *tableNameUnquoted; // @synthesize tableNameUnquoted=_tableNameUnquoted;
@property(retain, nonatomic) NSString *sheetNameUnquoted; // @synthesize sheetNameUnquoted=_sheetNameUnquoted;
@property(retain, nonatomic) NSString *rest; // @synthesize rest=_rest;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) NSString *sheetName; // @synthesize sheetName=_sheetName;
@property(nonatomic) unsigned char stickyBits; // @synthesize stickyBits=_stickyBits;
@property(nonatomic) _Bool namesUsed; // @synthesize namesUsed=_namesUsed;
@property(retain, nonatomic) TSCEAbortObject *abortObject; // @synthesize abortObject=_abortObject;
@property(nonatomic) _Bool referenceIsComplete; // @synthesize referenceIsComplete=_referenceIsComplete;
@property(nonatomic) _Bool filterColons; // @synthesize filterColons=_filterColons;
@property(retain, nonatomic) NSString *contextSheetName; // @synthesize contextSheetName=_contextSheetName;
@property(retain, nonatomic) id <TSCEReferenceResolving> contextResolver; // @synthesize contextResolver=_contextResolver;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContextResolver:(id)arg1;

@end

