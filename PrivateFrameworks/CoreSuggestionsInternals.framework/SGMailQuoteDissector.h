/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGMailQuoteDissector : NSObject <SGPipelineDissector> {
    bool_paranoid;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)initialize;

- (id)_tofuRegions:(id)arg1 utf16:(id)arg2;
- (id)_xWrote:(id)arg1 utf16:(id)arg2 htmlQuotedRegions:(id)arg3;
- (void)dissect:(id)arg1;
- (id)initParanoid;
- (id)quotedRegionsFrom:(id)arg1 htmlQuotedRegions:(id)arg2;
- (id)quotedRegionsFrom:(id)arg1;

@end