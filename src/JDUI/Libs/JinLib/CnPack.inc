{******************************************************************************}
{                       CnPack For Delphi/C++Builder                           }
{                     �й����Լ��Ŀ���Դ�������������                         }
{                   (C)Copyright 2001-2008 CnPack ������                       }
{                   ------------------------------------                       }
{                                                                              }
{            ���������ǿ�Դ���������������������� CnPack �ķ���Э������        }
{        �ĺ����·�����һ����                                                }
{                                                                              }
{            ������һ��������Ŀ����ϣ�������ã���û���κε���������û��        }
{        �ʺ��ض�Ŀ�Ķ������ĵ���������ϸ���������� CnPack ����Э�顣        }
{                                                                              }
{            ��Ӧ���Ѿ��Ϳ�����һ���յ�һ�� CnPack ����Э��ĸ��������        }
{        ��û�У��ɷ������ǵ���վ��                                            }
{                                                                              }
{            ��վ��ַ��http://www.cnpack.org                                   }
{            �����ʼ���master@cnpack.org                                       }
{                                                                              }
{******************************************************************************}

{******************************************************************************}
{                                                                              }
{                ��ע���õ�ԪΪ��������ָ��ͱ������汾��Ϣ�����ļ�            }
{                      �õ�Ԫ�����ݲο��� JCL �� GExperts                      }
{                                                                              }
{******************************************************************************}

//==============================================================================
// ��������ѡ��
//==============================================================================

//{$DEFINE PERSONAL_EDITION}
{$DEFINE ENTERPRISE_EDITION}

{$IFNDEF PERSONAL_EDITION}
  {$DEFINE SUPPORT_DB}
  {$DEFINE SUPPORT_ADO}
{$ENDIF}

//==============================================================================
// �����������汾��Ϣ
//==============================================================================

{$IFDEF VER200}
  {$DEFINE COMPILER12}
  {$DEFINE VCL71}
  {$DEFINE DELPHI12}
  {$DEFINE DELPHI2009}
  {$DEFINE BCB12}
  {$DEFINE BCB2009}
  {$DEFINE BDS6}
  {$DEFINE BDS2009}
{$ENDIF}

{$IFDEF VER185}
  {$DEFINE COMPILER11}
  {$DEFINE VCL71}
  {$DEFINE DELPHI11}
  {$DEFINE DELPHI2007}
  {$DEFINE BCB11}
  {$DEFINE BCB2007}
  {$DEFINE BDS5}
  {$DEFINE BDS2007}
  {$UNDEF VER180}
{$ENDIF}

{$IFDEF VER180}
  {$DEFINE COMPILER10}
  {$DEFINE VCL71}
  {$DEFINE DELPHI10}
  {$DEFINE DELPHI2006}
  {$DEFINE BCB10}
  {$DEFINE BCB2006}
  {$DEFINE BDS4}
  {$DEFINE BDS2006}
{$ENDIF}

{$IFDEF VER170}
  {$DEFINE COMPILER9}
  {$DEFINE VCL71}
  {$DEFINE DELPHI9}
  {$DEFINE DELPHI2005}
  {$DEFINE BDS3}
  {$DEFINE BDS2005}
{$ENDIF}

{$IFDEF VER160}
  {$DEFINE COMPILER8}
  {$DEFINE VCL71}
  {$DEFINE DELPHI8}
  {$DEFINE BDS2}
{$ENDIF}

{$IFDEF VER150}
  {$DEFINE COMPILER7}
  {$IFDEF LINUX}
    {$DEFINE CLX10}
  {$ELSE}
    {$DEFINE VCL70}
    {$DEFINE CLX10}
    {$IFDEF BCB}
      {$DEFINE BCB7}
    {$ELSE}
      {$DEFINE DELPHI7}
    {$ENDIF}
  {$ENDIF}
{$ENDIF}

{$IFDEF VER140}
  {$DEFINE COMPILER6}
  {$IFDEF LINUX}
    {$DEFINE CLX10}
    {$IFDEF CONDITIONALEXPRESSIONS}
      {$IFDEF CompilerVersion}
        {$IF System.RTLVersion = 14.1}
          {$DEFINE KYLIX2}
        {$IFEND}
        {$IF System.RTLVersion = 14.5}
          {$DEFINE KYLIX3}
        {$IFEND}
      {$ELSE}
        {$DEFINE KYLIX1}
      {$ENDIF}
    {$ENDIF}
  {$ELSE}
    {$DEFINE VCL60}
    {$DEFINE CLX10}
    {$IFDEF BCB}
      {$DEFINE BCB6}
    {$ELSE}
      {$DEFINE DELPHI6}
    {$ENDIF}
  {$ENDIF}
{$ENDIF}

{$IFDEF VER130}
  {$DEFINE COMPILER5}
  {$DEFINE VCL50}
  {$IFDEF BCB}
    {$DEFINE BCB5}
  {$ELSE}
    {$DEFINE DELPHI5}
  {$ENDIF}
{$ENDIF}

{$IFDEF VER125}
  {$DEFINE COMPILER4}
  {$DEFINE VCL40}
  {$DEFINE BCB4}
{$ENDIF}

{$IFDEF VER120}
  {$DEFINE COMPILER4}
  {$DEFINE VCL40}
  {$DEFINE DELPHI4}
{$ENDIF}

{$IFDEF VER110}
  {$DEFINE COMPILER35}
  {$DEFINE VCL30}
  {$DEFINE BCB3}
{$ENDIF}

{$IFDEF VER100}
  {$DEFINE COMPILER3}
  {$DEFINE VCL30}
  {$DEFINE DELPHI3}
{$ENDIF}

{$IFDEF VER93}
  {$DEFINE COMPILER2}
  {$DEFINE VCL20}
  {$DEFINE BCB1}
{$ENDIF}

{$IFDEF VER90}
  {$DEFINE COMPILER2}
  {$DEFINE VCL20}
  {$DEFINE DELPHI2}
{$ENDIF}

{$IFDEF VER80}
  {$DEFINE COMPILER1}
  {$DEFINE VCL10}
  {$DEFINE DELPHI1}
{$ENDIF}

// DELPHIX_UP from DELPHIX mappings

{$IFDEF DELPHI12}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI12_UP}
  {$DEFINE DELPHI11_UP}
  {$DEFINE DELPHI10_UP}
  {$DEFINE DELPHI9_UP}
  {$DEFINE DELPHI8_UP}
  {$DEFINE DELPHI7_UP}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI2009}
  {$DEFINE DELPHI2009_UP}
  {$DEFINE DELPHI2007_UP}
  {$DEFINE DELPHI2006_UP}
  {$DEFINE DELPHI2005_UP}
{$ENDIF}

{$IFDEF DELPHI11}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI11_UP}
  {$DEFINE DELPHI10_UP}
  {$DEFINE DELPHI9_UP}
  {$DEFINE DELPHI8_UP}
  {$DEFINE DELPHI7_UP}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI2007}
  {$DEFINE DELPHI2007_UP}
  {$DEFINE DELPHI2006_UP}
  {$DEFINE DELPHI2005_UP}
{$ENDIF}

{$IFDEF DELPHI10}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI10_UP}
  {$DEFINE DELPHI9_UP}
  {$DEFINE DELPHI8_UP}
  {$DEFINE DELPHI7_UP}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI2006}
  {$DEFINE DELPHI2006_UP}
  {$DEFINE DELPHI2005_UP}
{$ENDIF}

{$IFDEF DELPHI9}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI9_UP}
  {$DEFINE DELPHI8_UP}
  {$DEFINE DELPHI7_UP}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI2005}
  {$DEFINE DELPHI2005_UP}
{$ENDIF}

{$IFDEF DELPHI8}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI8_UP}
  {$DEFINE DELPHI7_UP}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI7}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI7_UP}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI6}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI6_UP}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI5}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI5_UP}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI4}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI4_UP}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI3}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI3_UP}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI2}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI2_UP}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

{$IFDEF DELPHI1}
  {$DEFINE DELPHI}
  {$DEFINE DELPHI1_UP}
{$ENDIF}

// BCBX_UP from BCBX mappings

{$IFDEF BCB12}
  {$DEFINE BCB}
  {$DEFINE BCB12_UP}
  {$DEFINE BCB11_UP}
  {$DEFINE BCB10_UP}
  {$DEFINE BCB7_UP}
  {$DEFINE BCB6_UP}
  {$DEFINE BCB5_UP}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB2008}
  {$DEFINE BCB2008_UP}
  {$DEFINE BCB2007_UP}
  {$DEFINE BCB2006_UP}
{$ENDIF}

{$IFDEF BCB11}
  {$DEFINE BCB}
  {$DEFINE BCB11_UP}
  {$DEFINE BCB10_UP}
  {$DEFINE BCB7_UP}
  {$DEFINE BCB6_UP}
  {$DEFINE BCB5_UP}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB2007}
  {$DEFINE BCB2007_UP}
  {$DEFINE BCB2006_UP}
{$ENDIF}

{$IFDEF BCB10}
  {$DEFINE BCB}
  {$DEFINE BCB10_UP}
  {$DEFINE BCB7_UP}
  {$DEFINE BCB6_UP}
  {$DEFINE BCB5_UP}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB2006}
  {$DEFINE BCB2006_UP}
{$ENDIF}

{$IFDEF BCB7}
  {$DEFINE BCB}
  {$DEFINE BCB7_UP}
  {$DEFINE BCB6_UP}
  {$DEFINE BCB5_UP}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB6}
  {$DEFINE BCB}
  {$DEFINE BCB6_UP}
  {$DEFINE BCB5_UP}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB5}
  {$DEFINE BCB}
  {$DEFINE BCB5_UP}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB4}
  {$DEFINE BCB}
  {$DEFINE BCB4_UP}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB3}
  {$DEFINE BCB}
  {$DEFINE BCB3_UP}
  {$DEFINE BCB1_UP}
{$ENDIF}

{$IFDEF BCB1}
  {$DEFINE BCB}
  {$DEFINE BCB1_UP}
{$ENDIF}

// KYLIXX_UP from KYLIXX mappings

{$IFDEF KYLIX3}
  {$DEFINE KYLIX}
  {$DEFINE KYLIX3_UP}
  {$DEFINE KYLIX2_UP}
  {$DEFINE KYLIX1_UP}
{$ENDIF}

{$IFDEF KYLIX2}
  {$DEFINE KYLIX}
  {$DEFINE KYLIX2_UP}
  {$DEFINE KYLIX1_UP}
{$ENDIF}

{$IFDEF KYLIX1}
  {$DEFINE KYLIX}
  {$DEFINE KYLIX1_UP}
{$ENDIF}

// BDSXX_UP from BDSXX mappings

{$IFDEF BDS6}
  {$DEFINE BDS}
  {$DEFINE BDS6_UP}
  {$DEFINE BDS5_UP}
  {$DEFINE BDS4_UP}
  {$DEFINE BDS3_UP}
  {$DEFINE BDS2_UP}
  {$DEFINE BDS1_UP}
{$ENDIF}

{$IFDEF BDS2008}
  {$DEFINE BDS2008_UP}
  {$DEFINE BDS2007_UP}
  {$DEFINE BDS2006_UP}
  {$DEFINE BDS2005_UP}
{$ENDIF}

{$IFDEF BDS5}
  {$DEFINE BDS}
  {$DEFINE BDS5_UP}
  {$DEFINE BDS4_UP}
  {$DEFINE BDS3_UP}
  {$DEFINE BDS2_UP}
  {$DEFINE BDS1_UP}
{$ENDIF}

{$IFDEF BDS2007}
  {$DEFINE BDS2007_UP}
  {$DEFINE BDS2006_UP}
  {$DEFINE BDS2005_UP}
{$ENDIF}

{$IFDEF BDS4}
  {$DEFINE BDS}
  {$DEFINE BDS4_UP}
  {$DEFINE BDS3_UP}
  {$DEFINE BDS2_UP}
  {$DEFINE BDS1_UP}
{$ENDIF}

{$IFDEF BDS2006}
  {$DEFINE BDS2006_UP}
  {$DEFINE BDS2005_UP}
{$ENDIF}

{$IFDEF BDS3}
  {$DEFINE BDS}
  {$DEFINE BDS3_UP}
  {$DEFINE BDS2_UP}
  {$DEFINE BDS1_UP}
{$ENDIF}

{$IFDEF BDS2005}
  {$DEFINE BDS2005_UP}
{$ENDIF}

{$IFDEF BDS2}
  {$DEFINE BDS}
  {$DEFINE BDS2_UP}
  {$DEFINE BDS1_UP}
{$ENDIF}

{$IFDEF BDS1}
  {$DEFINE BDS}
  {$DEFINE BDS1_UP}
{$ENDIF}

// COMPILERX_UP from COMPILERX mappings

{$IFDEF COMPILER12}
  {$DEFINE COMPILER12_UP}
  {$DEFINE COMPILER11_UP}
  {$DEFINE COMPILER10_UP}
  {$DEFINE COMPILER9_UP}
  {$DEFINE COMPILER8_UP}
  {$DEFINE COMPILER7_UP}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER11}
  {$DEFINE COMPILER11_UP}
  {$DEFINE COMPILER10_UP}
  {$DEFINE COMPILER9_UP}
  {$DEFINE COMPILER8_UP}
  {$DEFINE COMPILER7_UP}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER10}
  {$DEFINE COMPILER10_UP}
  {$DEFINE COMPILER9_UP}
  {$DEFINE COMPILER8_UP}
  {$DEFINE COMPILER7_UP}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER9}
  {$DEFINE COMPILER9_UP}
  {$DEFINE COMPILER8_UP}
  {$DEFINE COMPILER7_UP}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER8}
  {$DEFINE COMPILER8_UP}
  {$DEFINE COMPILER7_UP}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER7}
  {$DEFINE COMPILER7_UP}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER6}
  {$DEFINE COMPILER6_UP}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER5}
  {$DEFINE COMPILER5_UP}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER4}
  {$DEFINE COMPILER4_UP}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER35}
  {$DEFINE COMPILER35_UP}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER3}
  {$DEFINE COMPILER3_UP}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER2}
  {$DEFINE COMPILER2_UP}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

{$IFDEF COMPILER1}
  {$DEFINE COMPILER1_UP}
{$ENDIF}

// VCLXX_UP from VCLXX mappings

{$IFDEF VCL71}
  {$DEFINE VCL71_UP}
  {$DEFINE VCL70_UP}
  {$DEFINE VCL60_UP}
  {$DEFINE VCL50_UP}
  {$DEFINE VCL40_UP}
  {$DEFINE VCL30_UP}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL70}
  {$DEFINE VCL70_UP}
  {$DEFINE VCL60_UP}
  {$DEFINE VCL50_UP}
  {$DEFINE VCL40_UP}
  {$DEFINE VCL30_UP}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL60}
  {$DEFINE VCL60_UP}
  {$DEFINE VCL50_UP}
  {$DEFINE VCL40_UP}
  {$DEFINE VCL30_UP}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL50}
  {$DEFINE VCL50_UP}
  {$DEFINE VCL40_UP}
  {$DEFINE VCL30_UP}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL40}
  {$DEFINE VCL40_UP}
  {$DEFINE VCL30_UP}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL30}
  {$DEFINE VCL30_UP}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL20}
  {$DEFINE VCL20_UP}
  {$DEFINE VCL10_UP}
{$ENDIF}

{$IFDEF VCL10}
  {$DEFINE VCL10_UP}
{$ENDIF}

// CLXXX_UP from CLXXX mappings

{$IFDEF CLX10}
  {$DEFINE CLX10_UP}
{$ENDIF}

//==============================================================================
// ����ƽ̨��ض���
//==============================================================================

{$IFDEF COMPILER1}
  {$DEFINE WIN16}
  {$DEFINE MSWINDOWS}
{$ENDIF}

{$IFDEF BDS}
  {$DEFINE DOTNET}
{$ENDIF}

{$IFDEF WIN32}
  {$DEFINE MSWINDOWS}
{$ENDIF}

{$IFDEF LINUX}
  {$DEFINE UNIX}
  {$DEFINE COMPLIB_CLX}
{$ENDIF}

{$IFNDEF COMPLIB_CLX}
  {$DEFINE COMPLIB_VCL}
{$ENDIF}

//==============================================================================
// ӳ��汾��Ϣ�����Ѻõ�ָ��
//==============================================================================

{$IFDEF COMPILER3_UP}
  {$DEFINE SUPPORTS_WIDESTRING}
  {$DEFINE SUPPORTS_INTERFACE}
{$ENDIF}

{$IFDEF COMPILER35_UP}
  {$DEFINE SUPPORTS_EXTSYM}
  {$DEFINE SUPPORTS_NODEFINE}
{$ENDIF}

{$IFDEF COMPILER4_UP}
  {$DEFINE SUPPORTS_INT64}
  {$DEFINE SUPPORTS_DYNAMICARRAYS}
  {$DEFINE SUPPORTS_DEFAULTPARAMS}
  {$DEFINE SUPPORTS_REINTRODUCE}
  {$DEFINE SUPPORTS_OVERLOAD}
{$ENDIF}

{$IFDEF COMPILER6_UP}
  {$DEFINE SUPPORTS_ENUMVALUES}
  {$DEFINE SUPPORTS_VARIANTS}
  {$DEFINE SUPPORTS_IFDIRECTIVE}
{$ENDIF}

{$IFDEF DELPHI}
  {$DEFINE SUPPORTS_PASCAL}
{$ENDIF}

{$IFDEF BCB}
  {$DEFINE SUPPORTS_PASCAL}
  {$DEFINE SUPPORTS_CPLUSPLUS}
{$ENDIF}

{$IFDEF BDS}
  {$DEFINE SUPPORTS_PASCAL}
  {$DEFINE SUPPORTS_CSHARP}
  {$DEFINE IDE_WIDECONTROL}
{$ENDIF}

{$IFDEF DELPHI2009_UP}
  {$DEFINE UNICODE_STRING}
{$ENDIF}

//==============================================================================
// ��������
//==============================================================================

{.$DEFINE DEBUG}
{.$DEFINE USE_JCL}

{$IFDEF RELEASE}
  {$UNDEF DEBUG}
{$ENDIF}

{.$IFDEF DELPHI2009_UP}
  {.$UNDEF USE_JCL}
{.$ENDIF}

//==============================================================================
// ��� PascalScript �ĵ�������
//==============================================================================

{$DEFINE ALLDEBUG}

//==============================================================================
// ���������ֶ���
//==============================================================================

{$DEFINE GB2312}
{.$DEFINE BIG5}
{.$DEFINE ENGLISH}

//==============================================================================
// ����ı���ָ���������
//==============================================================================

{$A+ Force alignment on word/dword boundaries}
{$S+ stack checking}

{$B- Short evaluation of boolean values}
{$H+ Long string support}
{$V- No var string checking}
{$X+ Extended syntax}
{$P+ Open string parameters}
{$J+ Writeable typed constants}
{$R- No Range checking}

{$IFDEF COMPILER6_UP}
  {$WARN SYMBOL_PLATFORM OFF}
  {$WARN UNIT_PLATFORM OFF} 
  {$WARN SYMBOL_DEPRECATED OFF}
  {$WARN UNIT_DEPRECATED OFF}
{$ENDIF}

{$IFDEF COMPILER7_UP}       
  {$WARN UNSAFE_CAST OFF}   
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_TYPE OFF}
{$ENDIF}

{$IFDEF BCB}
  {$OBJEXPORTALL ON}
{$ENDIF}