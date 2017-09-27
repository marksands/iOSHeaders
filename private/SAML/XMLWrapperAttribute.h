//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XMLWrapperNamespace;

__attribute__((visibility("hidden")))
@interface XMLWrapperAttribute : NSObject
{
    struct _xmlAttr *_attributeNode;
    int _type;
    NSString *_name;
    NSString *_value;
    XMLWrapperNamespace *_ns;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) XMLWrapperNamespace *ns; // @synthesize ns=_ns;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)xmlAttrNodeForNode:(struct _xmlNode *)arg1 error:(id *)arg2;
- (id)initWithNode:(struct _xmlAttr *)arg1 error:(id *)arg2;

@end

