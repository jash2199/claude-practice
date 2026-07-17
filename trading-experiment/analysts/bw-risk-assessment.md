# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-17 (~14:41 ET)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run. Second report of the day, ~4 hours after the 10:41 ET post-trade report.*

---

## Overall Portfolio Risk Grade: **C-** (downgraded from 10:41 ET's C)

**Why the downgrade, stated plainly**: nothing about the book's own positioning changed this run — no trade, no new capital deployed, sector concentration is flat (39.24% vs. 39.26% at 10:41 ET). The downgrade is entirely about two pieces of evidence that surfaced *since* the last report and both cut against the two most load-bearing claims in this desk's recent upgrades. First, **OMCL — the position bought specifically to decouple from the book's other three holdings — just posted its worst day since entry, tied with NVDA as the book's biggest single-day loser (-2.09% vs. NVDA's -2.06%), a second straight session moving with the pack rather than against it.** One down day was a "watch it" note at 10:41 ET; two in a row, with OMCL now underperforming rather than merely correlating, is a live crack in the thesis this desk needs to say plainly rather than hedge. Second, **Iran struck Kuwaiti civilian desalination and power infrastructure today** — a different category of escalation than anything cited in the 10:41 ET report (military/shipping targets only), and Brent has continued climbing since that report (~$86.09-86.73 now vs. ~$84-86 then). Radical transparency: a book that is still 44% cash and still ~39% Technology look-through has no business getting graded up on vibes when its two most recent "proof points" (diversification working, escalation containable) both moved the wrong way in the same afternoon.

## Biggest risk right now
**OMCL's diversification thesis is failing its first real stress test, on the same day the Gulf conflict crossed into hitting civilian infrastructure.** The entire investment case for opening OMCL (per five analyst reports and 3+ weeks of falsifiable-trigger discipline) was that it doesn't move with NVDA/VTI/VXUS. Today it moved *more* than two of them. This could still be one bad week for a name with idiosyncratic (Q2 earnings anxiety building toward 7/30) rather than correlated risk — but "could still be" is not the same as "is." This desk is not calling the thesis dead after two sessions, but flagging it as the single most important thing to re-test at the next report, explicitly, rather than let a comfortable narrative (\"it's just noise\") calcify. Separately and almost as consequential: Iran's strike on Kuwait's Shuaiba desalination/power plant (IRGC's self-described "15th wave") is the first attack in this conflict on civilian utility infrastructure rather than military/shipping targets — a meaningful escalation in kind, not just degree, and it happened on a day Brent is already near a one-month high and climbing.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| OMCL decoupling thesis | 🔴 High, thesis cracking | -2.09% today, worse than NVDA (-2.06%) and far worse than VTI/VXUS — second straight same-direction red day, first time it's been the book's *worst* performer since entry |
| Sector concentration (look-through, Technology) | 🟠 High | ~39.24% of deployed capital ($10.88 of $27.72) — flat vs. 10:41 ET's 39.26%, no new structural move this run |
| Chip-sector / semiconductor correlation | 🔴 Critical | SOX down ~11% this week (steepest since March 2025), briefly touched a >20% drawdown from its June high (technical bear-market territory) before an afternoon dip-buying bounce — "make-or-break level" per financial press; fresh catalyst today: Chinese startup Moonshot's Kimi K3 model release adding to AI-competition/bubble jitters |
| Geopolitical/macro tail risk (Hormuz/Gulf) | 🔴 Critical, escalated in kind | Iran struck Kuwait's Shuaiba desalination/power plant today — first civilian-infrastructure target of this conflict, not just military/shipping; Brent ~$86.09-86.73, up further from 10:41 ET's ~$84-86 and still nowhere near the $75 de-escalation level; Oman-mediated talks reported this week but a fresh WebSearch this run could not confirm they occurred *today* specifically vs. an earlier (7/11) round — flagging this as a data-quality gap, do not treat "talks are happening" as de-escalation evidence without a dated, current source |
| AI-capex / infrastructure risk | 🟠 High | Unchanged from 10:41 ET (Meta Compute resale reports, CoreWeave hedging, NY moratorium, SK Hynix HBM pullback, Intel 18A delay) — now reinforced by the SOX's technical bear-market brush and a new competitive-threat angle (Kimi K3) |
| Single-stock (NVDA) look-through concentration | 🟡 Moderate | ~20.57% of deployed capital (direct $5.04 + VTI-embedded $0.66) — essentially flat vs. 10:41 ET's ~20.61% |
| Correlation risk (VTI/NVDA) | 🟠 High | Unchanged — NVDA still VTI's #1 holding (~6.70% of fund) |
| Chip-supply-chain combined exposure (NVDA + VXUS's TSMC/Samsung/SK Hynix) | 🟠 High | ~22.87% of deployed capital, essentially flat vs. 10:41 ET's ~22.9% |
| Execution/operational risk | 🟢 Low | No orders attempted this run; correctly no fresh catalyst to act on |
| Interest rate sensitivity | 🟡 Moderate | Unchanged — ~89% odds of a July 28-29 hold per CME FedWatch |
| Recession/drawdown risk | 🟠 High | Est. ~25-50% peak-to-trough drawdown on the deployed sleeve depending on severity (Sec. 6) — unchanged in substance from 10:41 ET |
| Liquidity risk (market) | 🟢 Very Low (NVDA/VTI/VXUS), 🟡 Low-Moderate (OMCL) | Unchanged — all four remain adequately liquid at this position size |
| Liquidity risk (account-level) | 🟢 Low | No orders pending |
| Geographic/currency risk | 🟡 Moderate | Unchanged — VXUS ~96%+ non-US-domiciled; blended book still roughly two-thirds US-domiciled |
| Idle cash / opportunity cost | 🔴 Critical | ~44.24% of the ~$49.72 trading pool (~$22.00) still idle — third consecutive multi-hour stretch above BR's 25% cash-floor trigger, unresolved since Tuesday |
| Position sizing discipline | 🟢 Low | No position breaches BR's 20% single-name face-value soft cap (largest is VTI at 19.81%) |

---

## 1. Ground-truth portfolio snapshot (live, this run — ~14:41 ET)

- **Total account value**: $99.7224 (`get_portfolio`: cash $72.00 + equity $27.7224)
- **Positions** (`get_equity_positions` + live `get_equity_quotes`):
  - NVDA: 0.024826 sh, avg cost $201.40, live $203.1203 (bid/ask $203.12/$203.14) → **$5.0428, +0.85% unrealized**; down **-2.06%** vs. yesterday's $207.40 close
  - VTI: 0.026826 sh, avg cost $372.77, live $367.13 (bid/ask $367.12/$367.14) → **$9.8486, -1.51% unrealized**; down **-0.93%** vs. yesterday's $370.58 close
  - VXUS: 0.095185 sh, avg cost $84.05, live $83.355 (bid/ask $83.36/$83.37) → **$7.9341, -0.82% unrealized**; down **-0.84%** vs. yesterday's $84.06 close
  - OMCL: 0.106405 sh, avg cost $46.99, live $46.02 (bid/ask $45.93/$46.03) → **$4.8968, -2.06% unrealized**; down **-2.09%** vs. yesterday's $47.00 close — **now the book's joint-worst performer today, not its diversifier**
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): trading pool ≈$49.72 (net unrealized loss -$0.28 across all four positions, cost basis $28.00 vs. current value $27.72), deployed $27.72 (55.76% of pool), deployable cash ≈$22.00 (44.24% of pool), reserve $50.00 untouchable (embedded in the $72.00 cash balance)
- **All four positions are red today, and for the first time OMCL is not the mildest loss of the four** — it is essentially tied with NVDA for the worst percentage move, a genuine change from the "OMCL is the clean hedge" pattern of its first three sessions.

## 2. Correlation analysis between holdings
- **NVDA ↔ VTI**: unchanged — NVDA is still VTI's #1 individual holding at ~6.70% of the fund.
- **NVDA ↔ VXUS**: unchanged structural read — indirect chip-sector beta via TSMC/Samsung/SK Hynix, all under their own headwinds this week (HBM-expansion pullback, competitive AI-model pressure).
- **VTI ↔ VXUS**: still the most genuinely diversifying pair on currency/regulatory/index-construction grounds; today's moves (-0.93% vs. -0.84%) are close enough to call this a broad global risk-off day rather than a US-vs-ex-US divergence.
- **NVDA/VTI/VXUS ↔ OMCL — second consecutive crack, now the dominant one**: 10:41 ET's report flagged one down day (-1.51%) as "the first crack, don't over-read one session." This run's data extends that pattern to a second straight session and, more importantly, OMCL is now moving *harder* than two of the three names it's meant to diversify against. This desk is not ready to call the thesis broken — OMCL has no direct link to the chip-sector or Meta-Compute-supply-glut catalysts driving today's tape, so this may simply be broad risk-aversion hitting a smaller, thinner-liquidity mid-cap disproportionately — but two-for-two on down days moving with the pack is no longer a one-off. **Explicit instruction for the next report: if this extends to a third session, upgrade this from a heat-map flag to a formal thesis review.**

## 3. Sector concentration risk
- **Look-through Technology-sector exposure**: NVDA ($5.0428, 100%) + VTI's Technology slice ($9.8486 × 42.30% ≈ $4.1663) + VXUS's Technology slice ($7.9341 × 21.04% ≈ $1.6693) = **~$10.878, or 39.24% of the $27.72 deployed sleeve** — flat vs. 10:41 ET's 39.26%, no structural change this run (expected, since no trade occurred).
- **As % of total account**: ~10.91%. As % of the ~$49.72 trading pool: ~21.88% — both essentially unchanged from the morning report.
- Still 🟠 High, not 🟢 Low. The OMCL trade earned a real, one-time dilution win this morning; it does not earn a second win for simply sitting still, and today's price action is a reminder that OMCL's *diversification value* (not just its face-value weight) is the thing actually being tested right now.

## 4. Geographic exposure and currency risk
- VXUS remains ~96%+ non-US-domiciled — unchanged, still the book's one real geographic diversification win.
- NVDA, VTI, and OMCL are all ~99%+ US-domiciled/US-equity. Blended, the book remains roughly two-thirds US-domiciled by look-through equity exposure — unchanged.
- Indirect supply-chain geography unchanged: Taiwan/South Korea chip-supply-chain exposure lives in two of four positions (NVDA's TSMC-fab dependency, VXUS's TSMC/Samsung/SK Hynix holdings).
- Hormuz/Gulf exposure: **hardened further and in a new way this run.** Iran struck Kuwait's Shuaiba desalination and power plant today — the conflict's first hit on civilian utility infrastructure rather than military or shipping targets, per Bloomberg and multiple regional outlets, described by the IRGC as the "15th wave" of an ongoing campaign (i.e., explicitly framed as sustained, not a one-off). Brent ~$86.09-86.73, up from 10:41 ET's ~$84-86 read and still climbing on the week. A WebSearch this run for confirmation of the Oman-mediated Saturday 7/18 talks referenced in the 10:41 ET report returned results that appear to conflate this week's news with an earlier (7/11) round of Oman diplomacy — **flagging this as a live data-quality gap: do not treat "Oman talks" headlines as confirmation that tomorrow's specific session has occurred or produced anything until a clearly dated, current source is found.**

## 5. Interest rate sensitivity
No material change since 10:41 ET: CME FedWatch ~89% odds of a July 28-29 hold (3.50-3.75% range), a non-projection meeting. Mild, steady tailwind for the growth-tilted core/satellite sleeve; does not offset the valuation-duration risk already embedded in NVDA (MS's DCF: still meaningfully overvalued) or the broader market's elevated forward multiple. OMCL's own rate sensitivity remains an unbuilt gap in this desk's coverage — flagging again that it should be closed in a future cycle now that the position is 5+ trading sessions old.

## 6. Recession stress test
Unchanged in substance from 10:41 ET (no new information this run that would move the bands):
- **Base recession scenario** (multiple compression, AI-capex digestion pause, no fresh geopolitical shock): NVDA -35% to -45%; VTI -25% to -35%; VXUS -22% to -32%; OMCL -20% to -30%. **Combined deployed-sleeve loss: ~$6.95-$9.72, a ~25.1%-35.0% drawdown on the $27.72 deployed sleeve.**
- **Severe/tail scenario** (recession + a Taiwan Strait disruption or a Gulf energy/inflation shock forcing the Fed to hold or hike into a slowdown): NVDA -55% to -65%; VTI -45% to -50%; VXUS -35% to -42%; OMCL -35% to -45%. **Combined deployed-sleeve loss: ~$11.70-$13.74, a ~42.2%-49.5% drawdown.** Today's Kuwait strike is a reminder this "severe" band is not a purely hypothetical tail — an actual Gulf energy-infrastructure attack, just against Kuwait rather than a directly oil-price-critical target, occurred this run.
- **On the total account**: $72.00 (72.2% of the account) is cash — $50 hard untouchable reserve, ~$22 currently idle deployable capital. Even the severe scenario above costs at most ~13.8% of total account value. Unchanged structural point: **the account's downside resilience comes overwhelmingly from being mostly uninvested, not from the risk profile of what is invested.**

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🟢 Low risk | Deep, liquid market; tight spread even amid the selloff |
| VTI | 🟢 Very Low risk | 🟢 Low risk | One of the most liquid US ETFs |
| VXUS | 🟢 Very Low risk | 🟢 Low risk | $150B+ AUM, tight spread |
| OMCL | 🟡 Low-Moderate risk | 🟢 Low risk | Mid-cap (~$2-3B); today's bid/ask ($45.93/$46.03, ~22bp spread) is the widest this desk has recorded for the name since entry — consistent with, though not proof of, a thinner-liquidity name amplifying a broad risk-off move |
| Cash ($72.00) | 🟢 No risk | 🟢 Low risk | Fully liquid |

## 8. Single stock risk and position sizing recommendations
- **Face-value sizing** (of the ~$49.72 trading pool): NVDA 10.14%, VTI 19.81%, VXUS 15.96%, OMCL 9.85%, cash 44.24%. None breach BR's 20% single-name soft cap (VTI closest).
- **Look-through NVDA sizing**: combined NVDA exposure (direct + VTI-embedded) is ~$5.70, or **~20.57% of deployed capital** — essentially flat vs. 10:41 ET.
- **Combined chip-supply-chain exposure** (NVDA look-through + VXUS's TSMC/Samsung/SK Hynix slice): **~$6.34, or ~22.87% of deployed capital** — flat vs. this morning.
- **Recommendation, held from 10:41 ET but with a new caveat**: the next dollar still should not go to a third core ETF or to adding to NVDA/VTI/VXUS. This desk had recommended growing OMCL or adding a second zero-AI-linkage satellite name (GS's OXY) as the next move — **that recommendation now needs to survive today's OMCL data point before being acted on.** Sizing up a name whose diversification value is actively in question, even at a cheaper price, is a different decision than sizing up a name that's proven itself for a week straight. Not a "don't buy OMCL" call — a "don't treat today's dip as automatically a good entry without first re-testing the thesis" call.
- **No stop-loss is in place on any of the four positions**, consistent with the standing "no mandated stop-loss, use judgment" rule. Flagging again, now with slightly more urgency given OMCL's live 2-day drawdown: still trivial in dollar terms at this account size, but the case for at least a documented (not necessarily automated) exit trigger per position continues to strengthen with each session.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on deployed sleeve |
|---|---|---|
| Hormuz conflict escalates further, now including civilian-infrastructure strikes as an established pattern (not a one-off) | ~25-30% (nudged up from 10:41 ET's 20-25% — today's Kuwait desalination/power strike is evidence the conflict is broadening in target selection, not just intensity) | -30% to -50% on NVDA via multiple compression; VTI down less but not spared; VXUS exposed via energy-import-sensitive economies plus chip-sector overlap; OMCL's insulation from this specific factor is now less certain given today's correlated move |
| AI-capex digestion / demand-supply mismatch repricing, reinforced by SOX's brush with bear-market territory and new AI-model competitive pressure (Kimi K3) | ~25-35% over 3-6 months, unchanged from 10:41 ET | -15% to -30% directly on NVDA; -8% to -15% on VXUS via TSMC/Samsung/SK Hynix; -3% to -6% on VTI; OMCL largely uncorrelated to this specific factor in theory, though today's data is a reason to hold that lightly |
| Hormuz conflict de-escalates within 1-2 weeks | ~10-15% (nudged down from 15-20% — a civilian-infrastructure strike the same week diplomacy was supposedly advancing is a negative signal on the diplomatic track's credibility, and this desk could not confirm today's reported Oman talks actually occurred as scheduled) | Modest relief rally across NVDA/VTI/VXUS; limited direct effect on OMCL |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity), unchanged | Hits NVDA + VXUS directly via TSMC/Samsung; VTI and OMCL less directly exposed |
| Broad recession / credit event, no specific tech or geopolitical trigger | ~10-15% over 6-12 months, unchanged | Base-to-severe stress test applies (Sec. 6): ~25-50% combined deployed-sleeve drawdown |
| OMCL's decoupling thesis proves to be a 2-day noise blip, not a pattern | ~55-65% (this desk's honest best guess — two sessions is a thin sample, and none of today's headline catalysts have an obvious OMCL-specific transmission channel) | If true: no change to the investment case, current sizing appropriate |
| OMCL's decoupling thesis is genuinely breaking down (position is more correlated to broad risk sentiment than to its own healthcare-sector fundamentals than believed at entry) | ~35-45% | Would not by itself argue for selling a $5 position, but would argue against sizing up the name as the next satellite dollar, and would weaken the "OMCL solves two risk factors" framing carried in state.md's strategy notes |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available on this account. All hedges remain about **what to buy next**, not what to sell.
1. **OMCL's cracking decoupling thesis** → the hedge here is informational, not transactional: don't add to OMCL on the strength of "it's cheaper now" without first confirming, over the next 2-3 sessions, whether today's move was broad-market noise or a real correlation shift. If it holds up as noise, this desk's prior recommendation (grow OMCL or add a second zero-AI-linkage satellite name) stands. If it doesn't, the book needs a genuinely different diversifier, not more of the same one.
2. **AI-compute/semiconductor-sector concentration, still the dominant structural risk (39.2% blended look-through)** → unchanged standing recommendation: any new capital should go to names with zero AI-compute linkage, pending #1 above being resolved either way.
3. **Hormuz/Gulf tail risk, now escalating in kind (civilian infrastructure) as well as in degree** → GS's OXY thesis remains the only candidate in the pipeline that would function as an actual equities-only hedge against this specific tail risk; today's escalation modestly strengthens the case for finishing its cross-vetting cycle, though it is a direct bet on the crisis continuing and carries its own concentration/correlation tradeoffs this desk has flagged before.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash), unchanged this cycle. Current trading-pool allocation: Core (VTI+VXUS) ~35.77%, Satellite (NVDA+OMCL) ~19.99%, Cash ~44.24%.
- **Core gap**: -19.23pp vs. target, ~$9.56 short — still the smallest-priority gap (VXUS already at its own 15% target; a third core ETF isn't the fix for anything flagged in this report).
- **Satellite gap**: -15.01pp vs. target, ~$7.46 short — still the more decision-relevant gap in principle, but see Sec. 8/10: the obvious next move (add to OMCL) needs today's thesis question resolved first.
- **Cash excess**: +34.24pp vs. target, ~$17.03 over — 🔴 Critical, unresolved for a third consecutive multi-hour stretch above BR's 25% cash-floor trigger. Radical transparency: this desk is not going to soften this because "the market is volatile right now" is a reason to be selective about *what* to buy, not a reason the cash pile itself is fine.

---

## Cross-analyst notes
- **BR's IPS (7/16 evening)**: this desk's satellite-gap framing still tracks BR's central call; today's data is a reason to slow-walk, not abandon, the "next dollar to satellite" conclusion.
- **GS (7/17)**: this desk's OMCL correlation flag is new information GS's own report (dated earlier today, before this afternoon's price action) doesn't yet reflect — worth GS explicitly re-underwriting the "decoupled" framing at its next cycle rather than restating it by default.
- **MS's DCF (7/17)**: OMCL's margin of safety (~20.7% upside per this morning's DCF) is a valuation cushion, not a correlation cushion — today's move is a reminder those are two different kinds of risk, and a name can be undervalued and still move with a broad risk-off tape.
- **JPM (7/17)**: OMCL's 7/30 earnings window (13 days out) remains the nearest binary risk on the position; nothing this run changes that read, but a name showing early correlation cracks heading into its own earnings print is a slightly less comfortable setup than one that's proven itself decoupled first.

---

Sources:
- [Chips Stocks Sink Into Bear Market as 105% AI Rally Fizzles (Bloomberg)](https://www.bloomberg.com/news/articles/2026-07-17/chips-stocks-tumble-into-bear-market-as-105-ai-rally-fizzles)
- [The $2 trillion chip sell-off hits a make-or-break level: Chart of the Day (Yahoo Finance)](https://finance.yahoo.com/markets/article/the-2-trillion-chip-sell-off-hits-a-make-or-break-level-chart-of-the-day-155000822.html)
- [Stock market today: Nasdaq leads Dow, S&P 500 lower as chip stocks bounce off lows (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-friday-july-17-dow-sp-500-nasdaq-092345307.html)
- [Semiconductor stocks keep falling as investors go risk-off, Chinese startup releases powerful new AI model (Yahoo Finance)](https://finance.yahoo.com/markets/article/semiconductor-stocks-keep-falling-as-investors-go-risk-off-chinese-startup-releases-powerful-new-ai-model-130920103.html)
- [Iran Attacks Kuwait Desalination and Power Plants as Hostilities Worsen (Bloomberg)](https://www.bloomberg.com/news/articles/2026-07-17/iran-attacks-kuwait-desalination-and-power-plants-as-hostilities-worsen)
- [Kuwait says Iran attacked a power and water desalination plant, causing widespread damage (Gulf News)](https://gulfnews.com/world/gulf/kuwait/kuwait-says-iran-strikes-damaged-power-and-water-desalination-plant-1.500611118)
- [Oil prices rise after Kuwait says Iran attacked water desalination and power plant (CNBC)](https://www.cnbc.com/2026/07/17/oil-price-today-brent-wti.html)
- [Oil Prices Today, July 17, 2026: Brent Crude Nears $85, WTI Tops $79 As US-Iran Conflict Raises Red Sea Supply Fears (HDFCSky)](https://hdfcsky.com/news/brent-crude-oil-prices-today-july-17-2026-us-iran-conflict-red-sea-supply-fears)
- [2026 Strait of Hormuz crisis (Wikipedia)](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis)
