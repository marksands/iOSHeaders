//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RUIScriptingStaticValue : NSObject
{
    int _JSPropertyAttributes;
    const char *_identifier;
    CDUnknownFunctionPointerType _getter;
    CDUnknownFunctionPointerType _setter;
}

@property(nonatomic) int JSPropertyAttributes; // @synthesize JSPropertyAttributes=_JSPropertyAttributes;
@property(nonatomic) CDUnknownFunctionPointerType setter; // @synthesize setter=_setter;
@property(nonatomic) CDUnknownFunctionPointerType getter; // @synthesize getter=_getter;
@property(nonatomic) const char *identifier; // @synthesize identifier=_identifier;
- (id)description;

@end

